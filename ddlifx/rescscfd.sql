create table rescscaf
(
recscsc     char(12),
recsdes     char(40),
recsur1     char(25),
recsur2     char(25),
recsud1     char(8),
recsud2     char(8),
recsuy1     char(1),
recsuy2     char(1),
recsspa     char(20),
lf          char(1)
);
create unique index rescsca1 on rescscaf
(
recscsc
);
revoke all on rescscaf from public ; 
grant select on rescscaf to public ; 
