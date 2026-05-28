SELECT 
    m.id,
    m.name
FROM 
    movies as m
JOIN
    genres as g ON m.id_genres = g.id
WHERE
    g.description = 'Action';