create database table3;
use table3;
 create table Salesperson(
sno int primary key,sname varchar(50),city varchar(50),comm decimal(4,2)
 );
 
CREATE TABLE Customer (
  CNM INT PRIMARY KEY,
  CNAME VARCHAR(255),
  CITY VARCHAR(255),
  RATING INT,SNo INT,FOREIGN KEY (SNo) REFERENCES Salesperson(SNo)
);
INSERT INTO Salesperson (SNo, SNAME, CITY, COMM) VALUES
(1001, 'Peel', 'London', 0.12),

(1002, 'Serres', 'San Jose', 0.13),

(1004, 'Motika', 'London', 0.11),

(1007, 'Rafkin', 'Barcelona', 0.15),

(1003, 'Axelrod', 'New York', 0.1);


INSERT INTO Customer (CNM, CNAME, CITY, RATING, SNo) VALUES

(201, 'Hoffman', 'London', 100, 1001),

(202, 'Giovanne', 'Roe', 200, 1003),

(203, 'Liu', 'San Jose', 300, 1002),

(204, 'Grass', 'Barcelona', 100, 1002),

(206, 'Clemens', 'London', 300, 1007),

(207, 'Pereira', 'Roe', 100, 1004);

/*Names and cities of all salespeople in London with commission above 0.12*/

SELECT SNAME, CITY, COMM
FROM SALESPERSON
WHERE CITY = 'London' AND COMM > 0.12;

/*.All salespeople either in Barcelona or in London*/
SELECT * FROM salesperson WHERE city = 'barcelona' OR city = 'london';

/* All salespeople with commission between 0.10 and 0.12. (Boundary
valuesshould be excluded).*/

SELECT * FROM salesperson WHERE comm between 0.10 AND 0.12;

/* All customers excluding those with rating <= 100 unless they are located
inRome*/

SELECT * FROM Customer WHERE rating >  100
union
SELECT * FROM customer WHERE city = 'roe';
 
