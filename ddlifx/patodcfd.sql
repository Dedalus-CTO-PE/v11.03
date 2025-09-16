create table patodcaf
(
dptodadm    char(8),
ptoddate    char(8),
ptodsent    char(1),
ptodfill    char(49),
lf          char(1)
);
create unique index patodca1 on patodcaf
(
dptodadm
);
create unique index patodca2 on patodcaf
(
ptoddate,
dptodadm
);
revoke all on patodcaf from public ; 
grant select on patodcaf to public ; 
