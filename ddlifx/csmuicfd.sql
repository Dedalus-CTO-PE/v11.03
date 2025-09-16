create table csmuicaf
(
csucdbs     char(3),
csuccat     char(7),
csucsup     char(5),
csucsut     char(15),
csuctyp     decimal(2,0),
csucspa     char(20),
lf          char(1)
);
create unique index csmuica1 on csmuicaf
(
csucdbs,
csuccat,
csucsup,
csucsut
);
revoke all on csmuicaf from public ; 
grant select on csmuicaf to public ; 
