create table patkdraf
(
ptkditm     char(4),
ptkdkwd     char(15),
ptkdspa     char(10),
lf          char(1)
);
create unique index patkdra1 on patkdraf
(
ptkditm,
ptkdkwd
);
create unique index patkdra2 on patkdraf
(
ptkdkwd,
ptkditm
);
revoke all on patkdraf from public ; 
grant select on patkdraf to public ; 
