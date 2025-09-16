create table patc1sad
(
  ptc1date    char(6) default ' ' not null,
  ptc1type    char(3) default ' ' not null,
  ptc1doct    char(6) default ' ' not null,
  ptc1typp    char(1) default ' ' not null,
  ptc1dsch    decimal(5,0) default 0 not null,
  ptc1tbdy    decimal(5,0) default 0 not null,
  ptc1pbdy    decimal(5,0) default 0 not null,
  ptc1spar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index patc1sa1 on patc1sad
(
ptc1date,
ptc1type,
ptc1doct,
ptc1typp
);
revoke all on patc1sad from public ; 
grant select on patc1sad to public ; 
