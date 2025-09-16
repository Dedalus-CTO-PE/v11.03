create table pcpfrbaf
(
pcfbcode    char(9),
pcfbshft    char(3),
pcfbnumb    decimal(3,0),
pcfbspar    char(20),
lf          char(1)
);
create unique index pcpfrba1 on pcpfrbaf
(
pcfbcode,
pcfbshft
);
revoke all on pcpfrbaf from public ; 
grant select on pcpfrbaf to public ; 
