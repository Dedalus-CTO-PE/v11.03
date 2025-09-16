create table prsadfaf
(
prafdate    char(8),
prafrefr    char(2),
prafseps    decimal(6,0),
prafbday    decimal(6,0),
prafsame    decimal(6,0),
lf          char(1)
);
create unique index prsadfa1 on prsadfaf
(
prafdate,
prafrefr
);
revoke all on prsadfaf from public ; 
grant select on prsadfaf to public ; 
