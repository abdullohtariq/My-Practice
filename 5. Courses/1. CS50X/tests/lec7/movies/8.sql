SELECT p.name
FROM people as p
JOIN stars s ON p.id = s.person_id
JOIN movies m ON s.movie_id = m.id
WHERE m.title = 'Toy Story';
