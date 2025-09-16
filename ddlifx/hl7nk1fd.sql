create table hl7nk1af
(
  dnk1in01    char(20) default ' ' not null,
  dnk1in02    char(2) default ' ' not null,
  nk1001      char(4) default ' ' not null,
  nk1002      char(48) default ' ' not null,
  nk1003      char(60) default ' ' not null,
  nk1004      char(106) default ' ' not null,
  nk1005      char(40) default ' ' not null,
  nk1006      char(40) default ' ' not null,
  nk1007      char(60) default ' ' not null,
  nk1008      char(26) default ' ' not null,
  nk1009      char(8) default ' ' not null,
  nk1010      char(60) default ' ' not null,
  nk1011      char(20) default ' ' not null,
  nk1012      char(20) default ' ' not null,
  nk1013      char(60) default ' ' not null,
  nk1014      char(2) default ' ' not null,
  nk1015      char(2) default ' ' not null,
  nk1016      char(26) default ' ' not null,
  nk1017      char(2) default ' ' not null,
  nk1018      char(2) default ' ' not null,
  nk1019      char(4) default ' ' not null,
  nk1020      char(60) default ' ' not null,
  nk1021      char(2) default ' ' not null,
  nk1022      char(2) default ' ' not null,
  nk1023      char(2) default ' ' not null,
  nk1024      char(2) default ' ' not null,
  nk1025      char(3) default ' ' not null,
  nk1026      char(48) default ' ' not null,
  nk1027      char(80) default ' ' not null,
  nk1028      char(3) default ' ' not null,
  nk1029      char(80) default ' ' not null,
  nk1030      char(48) default ' ' not null,
  nk1031      char(40) default ' ' not null,
  nk1032      char(106) default ' ' not null,
  nk1033      char(32) default ' ' not null,
  nk1034      char(2) default ' ' not null,
  nk1035      char(1) default ' ' not null,
  nk1036      char(2) default ' ' not null,
  nk1037      char(16) default ' ' not null,
  nk1038      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7nk101 on hl7nk1af
(
dnk1in01,
dnk1in02
);
revoke all on hl7nk1af from public ; 
grant select on hl7nk1af to public ; 
