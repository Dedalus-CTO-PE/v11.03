create table patc2saf
(
ptc2date    char(6),
ptc2clss    char(3),
ptc2doct    char(6),
ptc2emrg    decimal(5,0),
ptc2elct    decimal(5,0),
ptc2dsch    decimal(5,0),
ptc2dead    decimal(5,0),
ptc2stdp    decimal(5,0),
ptc2prvp    decimal(5,0),
ptc2stdb    decimal(5,0),
ptc2prvb    decimal(5,0),
ptc2rng1    decimal(5,0),
ptc2rng2    decimal(5,0),
ptc2rng3    decimal(5,0),
ptc2rng4    decimal(5,0),
ptc2spar    char(11),
lf          char(1)
);
create unique index patc2sa1 on patc2saf
(
ptc2date,
ptc2clss,
ptc2doct
);
revoke all on patc2saf from public ; 
grant select on patc2saf to public ; 
