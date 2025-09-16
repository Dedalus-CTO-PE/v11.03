create table nzpextaf
(
  nzexbtid    char(19) default ' ' not null,
  nzexhcod    char(3) default ' ' not null,
  nzexadmn    char(8) default ' ' not null,
  nzexinvn    char(8) default ' ' not null,
  nzextrno    char(6) default ' ' not null,
  nzexurno    char(8) default ' ' not null,
  nzexsyst    char(1) default ' ' not null,
  nzexrtyp    decimal(2,0) default 0 not null,
  nzexdesc    char(20) default ' ' not null,
  nzextdat    char(8) default ' ' not null,
  nzexrcno    char(12) default ' ' not null,
  nzexpref    char(17) default ' ' not null,
  nzexpmth    char(1) default ' ' not null,
  nzexmcty    char(3) default ' ' not null,
  nzexcoms    decimal(5,2) default 0 not null,
  nzexgstc    char(6) default ' ' not null,
  nzexbnam    char(30) default ' ' not null,
  nzexglbt    char(5) default ' ' not null,
  nzexcacc    char(14) default ' ' not null,
  nzexcamt    decimal(14,2) default 0 not null,
  nzexdacc    char(14) default ' ' not null,
  nzexdamt    decimal(14,2) default 0 not null,
  nzexcdat    char(8) default ' ' not null,
  nzexctim    char(8) default ' ' not null,
  nzexcuid    char(10) default ' ' not null,
  nzexrref    char(40) default ' ' not null,
  nzexcrst    char(1) default ' ' not null,
  nzexspar    char(57) default ' ' not null,
  lf          char(1)
);
create  index nzpexta1 on nzpextaf
(
nzexbtid,
nzexhcod,
nzexglbt,
nzexadmn,
nzexinvn,
nzextrno
);
create  index nzpexta2 on nzpextaf
(
nzexadmn,
nzexinvn,
nzexglbt,
nzexhcod,
nzextrno
);
create  index nzpexta3 on nzpextaf
(
nzexglbt,
nzexhcod,
nzexadmn,
nzexinvn,
nzextrno
);
create  index nzpexta4 on nzpextaf
(
nzexhcod,
nzexglbt,
nzexadmn,
nzexinvn,
nzextrno
);
revoke all on nzpextaf from public ; 
grant select on nzpextaf to public ; 
