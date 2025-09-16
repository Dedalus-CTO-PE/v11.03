create table resdeaaf
(
redardt     char(8),
redartm     char(5),
redarun     char(4),
redasid     char(4),
redapid     char(16),
redavty     char(2),
redaoty     char(12),
redaocs     char(12),
redaosc     char(10),
redaosd     char(20),
redavst     char(127),
redavnm     decimal(14,4),
redauni     char(20),
redarfr     char(20),
redaabf     char(5),
redaprb     decimal(6,2),
redanat     char(2),
redasta     char(1),
redatfl     char(1),
redaodt     char(8),
redaotm     char(5),
redaper     char(25),
redarob     char(25),
redaspa     char(20),
lf          char(1)
);
create unique index resdeaa1 on resdeaaf
(
redardt,
redartm,
redarun,
redasid
);
create unique index resdeaa2 on resdeaaf
(
redapid,
redaocs,
redaoty,
redardt,
redartm,
redarun,
redasid
);
revoke all on resdeaaf from public ; 
grant select on resdeaaf to public ; 
