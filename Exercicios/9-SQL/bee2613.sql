SELECT
    m.id,
    m.name
FROM
    movies AS m
JOIN
    prices AS p ON m.id_prices = p.id
WHERE
    p.value < 2;