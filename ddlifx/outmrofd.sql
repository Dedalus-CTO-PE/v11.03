create table outmroaf
(
dotmoadm    char(8),
dotmorec    char(2),
otmocode    char(9),
otmoodat    char(8),
otmoostm    char(8),
otmooetm    char(8),
otmodate    char(8),
otmotime    char(8),
otmouser    char(4),
otmospar    char(26),
lf          char(1)
);
create unique index outmroa1 on outmroaf
(
dotmoadm,
dotmorec
);
create unique index outmroa2 on outmroaf
(
otmocode,
dotmoadm,
dotmorec
);
revoke all on outmroaf from public ; 
grant select on outmroaf to public ; 
