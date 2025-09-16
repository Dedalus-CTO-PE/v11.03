create table patrdcaf
(
  ptrccode    char(9) default ' ' not null,
  ptrcdesc    char(70) default ' ' not null,
  ptrcvrsn    char(2) default ' ' not null,
  ptrcspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index patrdca1 on patrdcaf
(
ptrccode,
ptrcvrsn
);
revoke all on patrdcaf from public ; 
grant select on patrdcaf to public ; 
