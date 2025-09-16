create table outstbaf
(
osbsite     char(6),
osbcata     char(2),
osbcode     char(3),
osbdate     char(6),
osbnumb     decimal(8,0),
osbspar     char(24),
lf          char(1)
);
create unique index outstba1 on outstbaf
(
osbsite,
osbcata,
osbcode,
osbdate
);
revoke all on outstbaf from public ; 
grant select on outstbaf to public ; 
