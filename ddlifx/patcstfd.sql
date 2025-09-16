create table patcstsf
(
cccode      char(3),
cccyymm     char(6),
ccadmn      decimal(8,0),
ccabday     decimal(8,0),
ccsamed     decimal(8,0),
ccsmday     decimal(8,0),
ccboard     decimal(8,0),
ccbrday     decimal(8,0),
ccspare     char(42),
lf          char(1)
);
create unique index patcsts1 on patcstsf
(
cccode,
cccyymm
);
revoke all on patcstsf from public ; 
grant select on patcstsf to public ; 
