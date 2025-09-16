create table prialsaf
(
pralusid    char(10),
pralspar    char(30),
lf          char(1)
);
create unique index prialsa1 on prialsaf
(
pralusid
);
revoke all on prialsaf from public ; 
grant select on prialsaf to public ; 
