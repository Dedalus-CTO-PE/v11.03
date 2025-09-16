create table patjrnlf
(
  jcode       char(2) default ' ' not null,
  jdate       char(8) default ' ' not null,
  djadmn      char(8) default ' ' not null,
  djtrns      char(6) default ' ' not null,
  jinvn       char(8) default ' ' not null,
  ptjrindc    char(1) default ' ' not null,
  ptjrcuid    char(10) default ' ' not null,
  ptjrcdat    char(8) default ' ' not null,
  ptjrctim    char(8) default ' ' not null,
  jspare      char(40) default ' ' not null,
  lf          char(1)
);
create unique index patjrnl1 on patjrnlf
(
jcode,
jdate,
djadmn,
djtrns
);
create unique index patjrnl2 on patjrnlf
(
ptjrindc,
jcode,
jdate,
djadmn,
djtrns
);
create unique index patjrnl3 on patjrnlf
(
djadmn,
djtrns,
jdate,
jcode
);
revoke all on patjrnlf from public ; 
grant select on patjrnlf to public ; 
