create table mehlegaf
(
  dmhleadm    char(8) default ' ' not null,
  mhledate    char(8) default ' ' not null,
  mhletime    char(5) default ' ' not null,
  mhlestat    char(3) default ' ' not null,
  mhlesent    char(1) default ' ' not null,
  mhlerevw    char(3) default ' ' not null,
  mhleflag    char(1) default ' ' not null,
  mhleempc    char(6) default ' ' not null,
  mhleempt    char(1) default ' ' not null,
  mhlespar    char(8) default ' ' not null,
  lf          char(1)
);
create unique index mehlega1 on mehlegaf
(
dmhleadm,
mhledate,
mhletime
);
create unique index mehlega2 on mehlegaf
(
mhledate,
mhletime,
dmhleadm
);
revoke all on mehlegaf from public ; 
grant select on mehlegaf to public ; 
