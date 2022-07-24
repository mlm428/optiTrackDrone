
#Simulation parameters

#TIME_STEP = #sim time step from gazebo


class PID(object):
	def __init__(self, KP, KI, KD, target):
		self.kp = KP
		self.ki = KI
		self.Kd = KD
		self.setpoint = target
		self.error = 0
		self.integral_error = 0
		self.error_last = 0
		self.derivative_error = 0
		self.output = 0
	def compute(self):
		self.error = self.setpoint - pos
		self.integral_error += self.error * TIME_STEP
		self.derivative_error = (self.error - self.error_last) / TIME_STEP
		self.error_last = self.error
		#compute corrective output from target
		self.output = self.kp * self.error + self.ki * self.integral_error + self.kd * self.derivative_error
		return self.output
