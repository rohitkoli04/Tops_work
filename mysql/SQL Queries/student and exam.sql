CREATE DATABASE stu1;
use stu1;
CREATE TABLE Student (
  Rollno INT PRIMARY KEY,
  Name VARCHAR(255),
  Branch VARCHAR(255)
);
INSERT INTO Student (Rollno, Name, Branch) VALUES

(1, 'Jay', 'Computer Science'),
(2, 'Suhani', 'Electronic and Com'),
(3, 'Kriti', 'Electronic and Com');

CREATE TABLE Exam (
  Rollno INT,
  S_code VARCHAR(255),
  Marks INT,
  P_code VARCHAR(255),
  FOREIGN KEY (Rollno) REFERENCES Student(Rollno)
);
INSERT INTO Exam (Rollno, S_code, Marks, P_code) VALUES

  (1, 'CS11', 50, 'CS'),
  (1, 'CS12', 60, 'CS'),
  (2, 'EC101', 66, 'EC'),
  (2, 'EC102', 70, 'EC'),
  (3, 'EC101', 45, 'EC'),
  (3, 'EC102', 50, 'EC');
  
  