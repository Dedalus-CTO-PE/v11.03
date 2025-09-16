create table outattaf
(
oatsite     char(6),
oatgrup     char(3),
oatctyp     char(6),
oatrefr     char(3),
oatdate     char(6),
oatnref     decimal(5,0),
oatnnon     decimal(5,0),
oatnbkd     decimal(5,0),
otatdsch    decimal(5,0),
oatspar     char(7),
lf          char(1)
);
create unique index outatta1 on outattaf
(
oatsite,
oatgrup,
oatctyp,
oatrefr,
oatdate
);
revoke all on outattaf from public ; 
grant select on outattaf to public ; 
