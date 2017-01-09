//gryo

//returns value in degree

void gyroFunction(int speed, int degrees)
{
	//if degrees is negative, turn left
	int turnTo = SensorValue[gryo] + degrees;

}


//ultrasonic

//returns value in cm

int USFunction()
{
	return SensorValue[sonar];
}

//bump

//returns value in 0 and 1

int bumpFunction()
{
	return SensorValue[touch];
}

//limit switch

//returns value in 0 and 1 maybe?

int LSFunction()
{
	return SensorValue[touch]
}

//PID
// lastError can either be a global, or passed and returned
// from the function
//returns value in distance/rotation
int PIDFunction(int requested, int lastError)
{
	// Say this returns 400
	int value = SensorValue[encoder];
	// Say we want to go to 600

	int error = value - requested;
	// Gain to change how fast our error reacts
	float pGain = 0.25;

	int diffError = error - lastError;
	lastError = error;

	float dGain = 0.1;

	int outputPower = error * pGain + diffError * dGain;

	motor[port1] = outputPower;
}

//Encoder

//returns value

void MoveEncoder(int leftmotorPower, int rightmotorPower, int distance)
{
	nMotorEncoder[leftMotor] = 0;
	nMotorEncoder[rightMotor] = 0;

	motor[leftMotor] = leftmotorPower;
	motor[rightMotor] = rightmotorPower;

	while(abs(nMotorEncoder[leftMotor]) < distance && abs(nMotorEncoder[rightMotor]) < distance)
	{
	}
	move(0,0,0);
}

//v2

void moveEncoder(int leftmotorPower, int rightmotorPower, int distance)
{
	nMotorEncoder[leftMotor] = 0;
	nMotorEncoder[rightMotor] = 0;

	motor[leftMotor] = leftmotorPower;
	motor[rightMotor] = rightmotorPower;

	while ( abs(nMotorEncoder[leftMotor])< distance && abs(nMotorEncoder[rightMotor]) < distance )
	{

	}
	move(0,0,0);
}

//Potentiometer
void PotentiometerFunction()
{
	// REturns between 0 and 1023
	int value = SensorValue[pot];
	if (value > 0 && value < 350)
	{
		// Do thing 1
	}
}
//drive through time

void drive(int leftMotorPower, int rightMotorPower, int time)
{
	motor[leftMotor] = leftMotorPower;
	motor[rightMotor] = rightMotorPower;
	wait1Msec(time);
}

//move until cord

void moveUntilColor(int leftmotorPower, int rightmotorPower, int grayscale)
{
	motor [leftMotor] = 100;
	motor [rightMotor] = 100;

	while(SensorValue[color] > grayscale )
	{

	}
	move(0,0,0);
}


//Remote Controls
