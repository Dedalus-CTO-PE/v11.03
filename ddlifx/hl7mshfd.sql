create table hl7mshaf
(
  dmshin01    char(20) default ' ' not null,
  dmshin02    char(2) default ' ' not null,
  msh001      char(2) default ' ' not null,
  msh002      char(4) default ' ' not null,
  msh003      char(127) default ' ' not null,
  msh004      char(127) default ' ' not null,
  msh005      char(127) default ' ' not null,
  msh006      char(127) default ' ' not null,
  msh007      char(26) default ' ' not null,
  msh008      char(40) default ' ' not null,
  msh009      char(7) default ' ' not null,
  msh010      char(20) default ' ' not null,
  msh011      char(3) default ' ' not null,
  msh012      char(8) default ' ' not null,
  msh013      char(15) default ' ' not null,
  msh01401    char(90) default ' ' not null,
  msh01402    char(90) default ' ' not null,
  msh015      char(2) default ' ' not null,
  msh016      char(2) default ' ' not null,
  msh017      char(2) default ' ' not null,
  msh018      char(6) default ' ' not null,
  msh019      char(60) default ' ' not null,
  msh020      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7msh01 on hl7mshaf
(
dmshin01,
dmshin02
);
revoke all on hl7mshaf from public ; 
grant select on hl7mshaf to public ; 
