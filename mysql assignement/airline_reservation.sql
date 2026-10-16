-- Airline Reservation System
-- MySQL project script
-- This script creates the database, 9 tables, and 20 records per table.
-- Note: DROP TABLE statements below rebuild these tables if they already exist.

CREATE DATABASE IF NOT EXISTS airline_reservation;
USE airline_reservation;

SET FOREIGN_KEY_CHECKS = 0;
DROP TABLE IF EXISTS Itinerary_Flight;
DROP TABLE IF EXISTS Flight_Crew;
DROP TABLE IF EXISTS Fare;
DROP TABLE IF EXISTS Booking;
DROP TABLE IF EXISTS Itinerary;
DROP TABLE IF EXISTS Flight;
DROP TABLE IF EXISTS Crew;
DROP TABLE IF EXISTS Passenger;
DROP TABLE IF EXISTS Aircraft;
SET FOREIGN_KEY_CHECKS = 1;

CREATE TABLE Aircraft (
    aircraft_id INT PRIMARY KEY,
    registration_no VARCHAR(20) UNIQUE,
    model VARCHAR(50),
    seating_capacity INT
);

CREATE TABLE Passenger (
    passenger_id INT PRIMARY KEY,
    full_name VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE,
    phone VARCHAR(15),
    seat_preference VARCHAR(20)
);

CREATE TABLE Crew (
    crew_id INT PRIMARY KEY,
    full_name VARCHAR(100) NOT NULL,
    role VARCHAR(30),
    phone VARCHAR(15)
);

CREATE TABLE Flight (
    flight_id INT PRIMARY KEY,
    flight_no VARCHAR(20) NOT NULL,
    origin VARCHAR(50),
    destination VARCHAR(50),
    departure_time DATETIME,
    arrival_time DATETIME,
    aircraft_id INT,
    FOREIGN KEY (aircraft_id) REFERENCES Aircraft(aircraft_id)
);

CREATE TABLE Booking (
    booking_id INT PRIMARY KEY,
    passenger_id INT,
    flight_id INT,
    booking_date DATE,
    status VARCHAR(20),
    amount_paid DECIMAL(10,2),
    payment_status VARCHAR(20),
    FOREIGN KEY (passenger_id) REFERENCES Passenger(passenger_id),
    FOREIGN KEY (flight_id) REFERENCES Flight(flight_id)
);

CREATE TABLE Flight_Crew (
    flight_id INT,
    crew_id INT,
    PRIMARY KEY (flight_id, crew_id),
    FOREIGN KEY (flight_id) REFERENCES Flight(flight_id),
    FOREIGN KEY (crew_id) REFERENCES Crew(crew_id)
);

CREATE TABLE Itinerary (
    itinerary_id INT PRIMARY KEY,
    passenger_id INT,
    FOREIGN KEY (passenger_id) REFERENCES Passenger(passenger_id)
);

CREATE TABLE Itinerary_Flight (
    itinerary_id INT,
    flight_id INT,
    segment_no INT,
    PRIMARY KEY (itinerary_id, segment_no),
    FOREIGN KEY (itinerary_id) REFERENCES Itinerary(itinerary_id),
    FOREIGN KEY (flight_id) REFERENCES Flight(flight_id)
);

CREATE TABLE Fare (
    fare_id INT PRIMARY KEY,
    flight_id INT,
    seat_class VARCHAR(20),
    price DECIMAL(10,2),
    FOREIGN KEY (flight_id) REFERENCES Flight(flight_id)
);

INSERT INTO Aircraft VALUES
(1,'VT-AAA','Airbus A320',180),
(2,'VT-AAB','Boeing 737',189),
(3,'VT-AAC','Airbus A321',220),
(4,'VT-AAD','Boeing 787',256),
(5,'VT-AAE','Airbus A320',180),
(6,'VT-AAF','ATR 72',70),
(7,'VT-AAG','ATR 72',70),
(8,'VT-AAH','Airbus A321',220),
(9,'VT-AAI','Boeing 737',189),
(10,'VT-AAJ','Airbus A320',180),
(11,'VT-AAK','Boeing 787',256),
(12,'VT-AAL','Airbus A321',220),
(13,'VT-AAM','ATR 72',70),
(14,'VT-AAN','Airbus A320',180),
(15,'VT-AAO','Boeing 737',189),
(16,'VT-AAP','Airbus A321',220),
(17,'VT-AAQ','Airbus A320',180),
(18,'VT-AAR','ATR 72',70),
(19,'VT-AAS','Boeing 787',256),
(20,'VT-AAT','Airbus A320',180);

INSERT INTO Passenger VALUES
(1,'Amit Sharma','amit1@gmail.com','9876500001','Window'),
(2,'Priya Patil','priya2@gmail.com','9876500002','Aisle'),
(3,'Rahul Khan','rahul3@gmail.com','9876500003','Window'),
(4,'Sneha Joshi','sneha4@gmail.com','9876500004','Aisle'),
(5,'Neha Verma','neha5@gmail.com','9876500005','Window'),
(6,'Arjun Singh','arjun6@gmail.com','9876500006','Aisle'),
(7,'Riya Desai','riya7@gmail.com','9876500007','Window'),
(8,'Sara Khan','sara8@gmail.com','9876500008','Aisle'),
(9,'Imran Ali','imran9@gmail.com','9876500009','Window'),
(10,'Pooja Sharma','pooja10@gmail.com','9876500010','Aisle'),
(11,'Rohan Patil','rohan11@gmail.com','9876500011','Window'),
(12,'Ayesha Shaikh','ayesha12@gmail.com','9876500012','Aisle'),
(13,'Karan Mehta','karan13@gmail.com','9876500013','Window'),
(14,'Zoya Khan','zoya14@gmail.com','9876500014','Aisle'),
(15,'Fatima Ali','fatima15@gmail.com','9876500015','Window'),
(16,'Sahil Jain','sahil16@gmail.com','9876500016','Aisle'),
(17,'Meera Nair','meera17@gmail.com','9876500017','Window'),
(18,'Adil Ansari','adil18@gmail.com','9876500018','Aisle'),
(19,'Nisha Kulkarni','nisha19@gmail.com','9876500019','Window'),
(20,'Vikram Rao','vikram20@gmail.com','9876500020','Aisle');

INSERT INTO Crew VALUES
(1,'Raj Malhotra','Pilot','9811100001'),
(2,'Anita Rao','Co-Pilot','9811100002'),
(3,'Sameer Khan','Attendant','9811100003'),
(4,'Pallavi Shah','Attendant','9811100004'),
(5,'Vivek Joshi','Pilot','9811100005'),
(6,'Nisha Mehta','Co-Pilot','9811100006'),
(7,'Aarav Desai','Attendant','9811100007'),
(8,'Sana Ali','Attendant','9811100008'),
(9,'Rohit Patil','Pilot','9811100009'),
(10,'Kavita Nair','Co-Pilot','9811100010'),
(11,'Imran Sheikh','Attendant','9811100011'),
(12,'Megha Jain','Attendant','9811100012'),
(13,'Kunal Verma','Pilot','9811100013'),
(14,'Farah Khan','Co-Pilot','9811100014'),
(15,'Dev Sharma','Attendant','9811100015'),
(16,'Amina Shaikh','Attendant','9811100016'),
(17,'Suresh Rao','Pilot','9811100017'),
(18,'Priti Kulkarni','Co-Pilot','9811100018'),
(19,'Naveen Das','Attendant','9811100019'),
(20,'Ritu Singh','Attendant','9811100020');

INSERT INTO Flight VALUES
(1,'AI101','Pune','Delhi','2026-11-01 08:00:00','2026-11-01 10:15:00',1),
(2,'AI102','Mumbai','Bengaluru','2026-11-02 09:00:00','2026-11-02 10:45:00',2),
(3,'AI103','Pune','Mumbai','2026-11-03 11:00:00','2026-11-03 12:00:00',3),
(4,'AI104','Delhi','London','2026-11-04 20:00:00','2026-11-05 01:30:00',4),
(5,'AI105','Chennai','Hyderabad','2026-11-05 07:30:00','2026-11-05 08:45:00',5),
(6,'AI106','Mumbai','Goa','2026-11-06 06:30:00','2026-11-06 07:45:00',6),
(7,'AI107','Delhi','Jaipur','2026-11-07 12:00:00','2026-11-07 13:00:00',7),
(8,'AI108','Mumbai','Goa','2026-11-08 14:00:00','2026-11-08 15:15:00',8),
(9,'AI109','Bengaluru','Kochi','2026-11-09 10:00:00','2026-11-09 11:10:00',9),
(10,'AI110','Delhi','Kolkata','2026-11-10 16:00:00','2026-11-10 18:00:00',10),
(11,'AI111','Pune','Chennai','2026-11-11 08:30:00','2026-11-11 10:15:00',11),
(12,'AI112','Kolkata','Delhi','2026-11-12 09:00:00','2026-11-12 11:15:00',12),
(13,'AI113','Hyderabad','Pune','2026-11-13 13:00:00','2026-11-13 14:15:00',13),
(14,'AI114','Ahmedabad','Mumbai','2026-11-14 17:00:00','2026-11-14 18:10:00',14),
(15,'AI115','Mumbai','Singapore','2026-11-15 23:00:00','2026-11-16 06:30:00',15),
(16,'AI116','Lucknow','Delhi','2026-11-16 07:00:00','2026-11-16 08:15:00',16),
(17,'AI117','Pune','Nagpur','2026-11-17 10:30:00','2026-11-17 11:40:00',17),
(18,'AI118','Mumbai','Chennai','2026-11-18 15:00:00','2026-11-18 17:00:00',18),
(19,'AI119','Delhi','Varanasi','2026-11-19 12:30:00','2026-11-19 13:45:00',19),
(20,'AI120','Jaipur','Mumbai','2026-11-20 18:00:00','2026-11-20 20:00:00',20);

INSERT INTO Booking VALUES
(1,1,1,'2026-10-16','Confirmed',5500.00,'Paid'),
(2,2,2,'2026-10-16','Confirmed',6200.00,'Paid'),
(3,3,3,'2026-10-16','Pending',0.00,'Pending'),
(4,4,4,'2026-10-16','Confirmed',45000.00,'Paid'),
(5,5,6,'2026-10-16','Confirmed',2800.00,'Paid'),
(6,6,7,'2026-10-16','Confirmed',3200.00,'Paid'),
(7,7,9,'2026-10-16','Confirmed',5800.00,'Paid'),
(8,8,8,'2026-10-16','Pending',0.00,'Pending'),
(9,9,10,'2026-10-16','Confirmed',3000.00,'Paid'),
(10,10,11,'2026-10-16','Confirmed',7000.00,'Paid'),
(11,11,12,'2026-10-16','Pending',0.00,'Pending'),
(12,12,13,'2026-10-16','Confirmed',4200.00,'Paid'),
(13,13,14,'2026-10-16','Confirmed',6000.00,'Paid'),
(14,14,15,'2026-10-16','Confirmed',38000.00,'Paid'),
(15,15,17,'2026-10-16','Confirmed',8500.00,'Paid'),
(16,16,18,'2026-10-16','Cancelled',0.00,'Refunded'),
(17,17,19,'2026-10-16','Confirmed',6200.00,'Paid'),
(18,18,20,'2026-10-16','Confirmed',5800.00,'Paid'),
(19,19,5,'2026-10-16','Cancelled',0.00,'Refunded'),
(20,20,16,'2026-10-16','Pending',0.00,'Pending');

INSERT INTO Flight_Crew VALUES
(1,1),(1,2),
(2,5),(2,6),
(3,3),(3,4),
(4,9),(4,10),
(5,7),(5,8),
(6,11),(6,12),
(7,13),(7,14),
(8,15),(8,16),
(9,17),(9,18),
(10,19),(10,20);

INSERT INTO Itinerary VALUES
(1,1),(2,2),(3,3),(4,4),(5,5),
(6,6),(7,7),(8,8),(9,9),(10,10),
(11,11),(12,12),(13,13),(14,14),(15,15),
(16,16),(17,17),(18,18),(19,19),(20,20);

INSERT INTO Itinerary_Flight VALUES
(1,1,1),(2,2,1),(3,3,1),(4,4,1),(5,5,1),
(6,6,1),(7,7,1),(8,8,1),(9,9,1),(10,10,1),
(11,11,1),(12,12,1),(13,13,1),(14,14,1),(15,15,1),
(16,16,1),(17,17,1),(18,18,1),(19,19,1),(20,20,1);

INSERT INTO Fare VALUES
(1,1,'Economy',5500.00),
(2,1,'Business',12000.00),
(3,2,'Economy',6200.00),
(4,2,'Business',14000.00),
(5,3,'Economy',3500.00),
(6,4,'Economy',25000.00),
(7,4,'Business',45000.00),
(8,5,'Economy',12000.00),
(9,5,'First',30000.00),
(10,6,'Economy',2800.00),
(11,7,'Economy',3200.00),
(12,8,'Economy',4000.00),
(13,9,'Economy',5800.00),
(14,10,'Economy',3000.00),
(15,11,'Business',15000.00),
(16,12,'Economy',6500.00),
(17,13,'Economy',4200.00),
(18,14,'Business',11000.00),
(19,15,'Economy',38000.00),
(20,16,'Economy',3500.00);

-- Verification: each of the nine tables should contain 20 rows.
SELECT 'Aircraft' AS table_name, COUNT(*) AS total_records FROM Aircraft
UNION ALL SELECT 'Passenger', COUNT(*) FROM Passenger
UNION ALL SELECT 'Crew', COUNT(*) FROM Crew
UNION ALL SELECT 'Flight', COUNT(*) FROM Flight
UNION ALL SELECT 'Booking', COUNT(*) FROM Booking
UNION ALL SELECT 'Flight_Crew', COUNT(*) FROM Flight_Crew
UNION ALL SELECT 'Itinerary', COUNT(*) FROM Itinerary
UNION ALL SELECT 'Itinerary_Flight', COUNT(*) FROM Itinerary_Flight
UNION ALL SELECT 'Fare', COUNT(*) FROM Fare;

-- Example report: passenger, flight, booking status, and amount paid.
SELECT Passenger.full_name, Flight.flight_no, Flight.origin, Flight.destination,
       Booking.status, Booking.amount_paid, Booking.payment_status
FROM Booking
INNER JOIN Passenger ON Booking.passenger_id = Passenger.passenger_id
INNER JOIN Flight ON Booking.flight_id = Flight.flight_id
ORDER BY Booking.booking_id;
