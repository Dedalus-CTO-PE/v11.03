create table patikiaf
(
ptikitm     char(9),
ptikkwd     char(15),
ptikspa     char(10),
lf          char(1)
);
create unique index patikia1 on patikiaf
(
ptikitm,
ptikkwd
);
create unique index patikia2 on patikiaf
(
ptikkwd,
ptikitm
);
revoke all on patikiaf from public ; 
grant select on patikiaf to public ; 
