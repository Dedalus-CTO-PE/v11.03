create table patcdeaf
(
dptcdrec    char(3),
ptcd4drg    char(4),
ptcdicdc    char(9),
ptcd4ddr    char(4),
ptcd4edr    char(4),
ptcdsprr    char(25),
lf          char(1)
);
create unique index patcdea1 on patcdeaf
(
dptcdrec,
ptcd4drg,
ptcdicdc
);
create unique index patcdea2 on patcdeaf
(
ptcd4drg,
dptcdrec,
ptcdicdc
);
create unique index patcdea3 on patcdeaf
(
ptcd4drg,
ptcdicdc
);
revoke all on patcdeaf from public ; 
grant select on patcdeaf to public ; 
