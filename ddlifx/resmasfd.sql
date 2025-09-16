create table resmasaf
(
remadat     char(8),
rematim     char(5),
remauni     char(4),
remaurn     char(8),
remavis     char(8),
remadoc     char(6),
remawrd     char(3),
rematem     char(3),
remadrn     char(1),
remawrn     char(1),
rematmn     char(1),
remaicn     char(3),
remanrm     char(1),
remade1     char(80),
remade2     char(80),
remade3     char(80),
rematyp     char(3),
remalty     decimal(2,0),
remaurl     char(127),
remaprg     char(8),
remarep     char(2),
rematmp     char(3),
remaspa     char(60),
lf          char(1)
);
create unique index resmasa1 on resmasaf
(
remadat,
rematim,
remauni
);
create unique index resmasa2 on resmasaf
(
remaurn,
remadat,
rematim,
remauni
);
create unique index resmasa3 on resmasaf
(
remavis,
remadat,
rematim,
remauni
);
create unique index resmasa4 on resmasaf
(
remadoc,
remadat,
rematim,
remauni
);
create unique index resmasa5 on resmasaf
(
rematem,
remadat,
rematim,
remauni
);
create unique index resmasa6 on resmasaf
(
remawrd,
remadat,
rematim,
remauni
);
revoke all on resmasaf from public ; 
grant select on resmasaf to public ; 
