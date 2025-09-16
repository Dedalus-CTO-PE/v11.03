create table mrtpshaf
(
  dmrpsadm    char(8) default ' ' not null,
  mrpsdate    char(8) default ' ' not null,
  mrpstime    char(5) default ' ' not null,
  mrpsstat    char(3) default ' ' not null,
  mrpscmnt    char(30) default ' ' not null,
  mrpsmis1    char(1) default ' ' not null,
  mrpsmis2    char(1) default ' ' not null,
  mrpsmis3    char(1) default ' ' not null,
  mrpsmis4    char(1) default ' ' not null,
  mrpsmis5    char(1) default ' ' not null,
  mrpsmis6    char(1) default ' ' not null,
  mrpsftm1    char(80) default ' ' not null,
  mrpsftm2    char(80) default ' ' not null,
  mrpsftm3    char(80) default ' ' not null,
  mrpsftm4    char(80) default ' ' not null,
  mrpsftm5    char(80) default ' ' not null,
  mrpsspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index mrtpsha1 on mrtpshaf
(
dmrpsadm,
mrpsdate,
mrpstime
);
revoke all on mrtpshaf from public ; 
grant select on mrtpshaf to public ; 
