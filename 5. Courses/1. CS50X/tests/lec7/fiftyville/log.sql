-- Keep a log of any SQL queries you execute as you solve the mystery.
-- 1. Find the crime scene report from Humphrey Street on July 28, 2023
SELECT *
FROM crime_scene_reports
WHERE street = 'Humphrey Street'
AND year = 2023
AND month = 7
AND day = 28;

-- 2. Find all interviews conducted on the day of the crime (July 28, 2023)
SELECT *
FROM interviews
WHERE year = 2023
AND month = 7
AND day = 28;

-- 3. Find ATM transactions made on the day of the crime (July 28, 2023)
SELECT *
FROM atm_transactions
WHERE year = 2023
AND month = 7
AND day = 28;

-- 4. Find all flights departing on the day of the crime (July 28, 2023)
SELECT *
FROM flights
WHERE year = 2023
AND month = 7
AND day = 28;

-- 5. Find passengers on flights departing on July 28, 2023
SELECT *
FROM passengers
JOIN flights ON passengers.flight_id = flights.id
WHERE flights.year = 2023
AND flights.month = 7
AND flights.day = 28;

-- 6. Find phone calls made on July 28, 2023
SELECT *
FROM phone_calls
WHERE year = 2023
AND month = 7
AND day = 28;

-- 7. Check bakery security logs for suspicious activity on July 28, 2023
SELECT *
FROM bakery_security_logs
WHERE year = 2023
AND month = 7
AND day = 28;

-- 8. Search for the accomplice's phone number in phone calls database
SELECT *
FROM people
WHERE phone_number IN (
    SELECT receiver
    FROM phone_calls
    WHERE caller = 'THIEF_PHONE_NUMBER'  -- Replace with actual phone number of the thief
);

