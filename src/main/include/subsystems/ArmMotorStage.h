/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <RobotMap.h>
#include <ctre/Phoenix.h>
#include <frc/WPILib.h>
#include <frc/smartdashboard/SmartDashboard.h>

class ArmMotorStage : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

TalonSRX * armLeft = new TalonSRX(kArmLeft);
TalonSRX * armRight = new TalonSRX(kArmRight);



 public:
  ArmMotorStage();
  void InitDefaultCommand() override;
  void SetTriggerControl(double rightTrigger, double leftTrigger);
  void LevelZero();
  void LevelTwo();
  double sendPosition;
  bool BottomLimitStatus();
};


