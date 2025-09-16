create table patipraf
(
  ptirvisn    char(8) default ' ' not null,
  ptirinvn    char(8) default ' ' not null,
  ptircoun    char(3) default ' ' not null,
  ptirmedi    char(40) default ' ' not null,
  ptirpola    decimal(14,2) default 0 not null,
  ptirchol    char(32) default ' ' not null,
  ptircpfn    char(15) default ' ' not null,
  ptiramnt    decimal(14,2) default 0 not null,
  ptirspar    char(37) default ' ' not null,
  lf          char(1)
);
create unique index patipra1 on patipraf
(
ptirvisn,
ptirinvn,
ptircoun
);
revoke all on patipraf from public ; 
grant select on patipraf to public ; 
