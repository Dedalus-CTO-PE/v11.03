create table resdecaf
(
redcrdt     char(8),
redcrtm     char(5),
redcrun     char(4),
redcsid     char(4),
redclno     char(3),
redctxt     char(127),
redcspa     char(10),
lf          char(1)
);
create unique index resdeca1 on resdecaf
(
redcrdt,
redcrtm,
redcrun,
redcsid,
redclno
);
revoke all on resdecaf from public ; 
grant select on resdecaf to public ; 
