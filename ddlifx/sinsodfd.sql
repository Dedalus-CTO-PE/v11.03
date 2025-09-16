create table sinsodaf
(
siodsid     char(3),
siodwar     char(5),
siodcat     char(7),
siodsup     char(5),
siodcst     decimal(16,4),
siodgsta    decimal(16,4),
siodqty     decimal(14,2),
siodsut     char(15),
siodcon     char(10),
siodcdt     char(8),
siodedt     char(8),
siodgst     char(6),
siodspa     char(22),
lf          char(1)
);
create unique index sinsoda1 on sinsodaf
(
siodwar,
siodcat
);
create unique index sinsoda2 on sinsodaf
(
siodsid,
siodsup,
siodwar,
siodcat
);
revoke all on sinsodaf from public ; 
grant select on sinsodaf to public ; 
