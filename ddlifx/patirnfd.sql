create table patirnge
(
irange      char(3),
irdesc      char(40),
irnext      decimal(8,0),
irmaxi      decimal(8,0),
irspar      char(10),
lf          char(1)
);
create unique index patirng1 on patirnge
(
irange
);
revoke all on patirnge from public ; 
grant select on patirnge to public ; 
