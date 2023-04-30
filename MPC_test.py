import numpy as np
from functions.all_functions import * #Removed the . in front of functions so python doesn't think functions is a package

## track lookup
# since this mpc simulates in distance steps the track must be discretised in those distance steps

# step
Ts = 1

# get track
HDtrack = track()
HDtrackX = HDtrack[:, 0]
HDtrackY = HDtrack[:, 1]

track_table = generateTrackLookup(HDtrack, Ts)


# MPC setup
PredictionHorizon = 6
InputHorizon = 5
X_init = np.array([0.1, 0, 0, 0.1, 0, 0, 0])#[-0.0600   -0.0055   -0.1325    2.0000   -0.1115   -0.1002    3.1574]';% ey, etheta, otheta_dot, Vx, Vy, delta, time
num_states = len(X_init)


# sim
simL = len(track_table) - 5 - PredictionHorizon  # simulation steps - simulate to end of track

states = np.zeros((simL+1, num_states)) # record states
states[0, :] = X_init
inputs = np.zeros((simL, 3, InputHorizon)) # record inputs
cost = np.zeros((1, simL)) # record costs

pos = np.zeros((simL, 2)) # record x-y of car

# simulate first step
U, fX, C = runMPC(states[0, :], np.zeros([3, InputHorizon]), track_table[0:1+PredictionHorizon], Ts)
cost[0] = C
inputs[0, :, :] = U
states[1, :] = fX[:, 0]

# convert the first steps from track coordinates to world coordintates
pos[0, :] = track2world(states[0, 0], track_table[0, :])
