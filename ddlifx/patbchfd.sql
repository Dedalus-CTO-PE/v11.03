create table pataudbc
(
ptbcaudd    char(8),
ptbcaudt    char(8),
ptbcaudp    char(2),
ptbcaudr    char(1),
ptbcauds    decimal(1,0),
ptbcaudo    char(4),
ptbcclm     char(3),
ptbcbrd     char(6),
ptbcdept    char(3),
dptbcend    char(3),
ptbcdesc    char(30),
ptbcppor    decimal(14,2),
ptbcbpor    decimal(14,2),
ptbcninv    decimal(1,0),
ptbcspar    char(12),
lf          char(1)
);
create index pataudbc on pataudbc
(
ptbcaudd,
ptbcaudt,
ptbcaudp,
ptbcaudr
);
revoke all on pataudbc from public ; 
grant select on pataudbc to public ; 
create table patbchaf
(
ptbcclm     char(3),
ptbcbrd     char(6),
ptbcdept    char(3),
dptbcend    char(3),
ptbcdesc    char(30),
ptbcppor    decimal(14,2),
ptbcbpor    decimal(14,2),
ptbcninv    decimal(1,0),
ptbcspar    char(12),
lf          char(1)
);
create unique index patbcha1 on patbchaf
(
ptbcclm,
ptbcbrd,
ptbcdept,
dptbcend
);
revoke all on patbchaf from public ; 
grant select on patbchaf to public ; 
