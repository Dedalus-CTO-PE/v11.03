create table nzpextaf
(
  nzexbtid    varchar2(19) default ' ' not null,
  nzexhcod    varchar2(3) default ' ' not null,
  nzexadmn    varchar2(8) default ' ' not null,
  nzexinvn    varchar2(8) default ' ' not null,
  nzextrno    varchar2(6) default ' ' not null,
  nzexurno    varchar2(8) default ' ' not null,
  nzexsyst    varchar2(1) default ' ' not null,
  nzexrtyp    number(2,0) default 0 not null,
  nzexdesc    varchar2(20) default ' ' not null,
  nzextdat    varchar2(8) default ' ' not null,
  nzexrcno    varchar2(12) default ' ' not null,
  nzexpref    varchar2(17) default ' ' not null,
  nzexpmth    varchar2(1) default ' ' not null,
  nzexmcty    varchar2(3) default ' ' not null,
  nzexcoms    number(5,2) default 0 not null,
  nzexgstc    varchar2(6) default ' ' not null,
  nzexbnam    varchar2(30) default ' ' not null,
  nzexglbt    varchar2(5) default ' ' not null,
  nzexcacc    varchar2(14) default ' ' not null,
  nzexcamt    number(14,2) default 0 not null,
  nzexdacc    varchar2(14) default ' ' not null,
  nzexdamt    number(14,2) default 0 not null,
  nzexcdat    varchar2(8) default ' ' not null,
  nzexctim    varchar2(8) default ' ' not null,
  nzexcuid    varchar2(10) default ' ' not null,
  nzexrref    varchar2(40) default ' ' not null,
  nzexcrst    varchar2(1) default ' ' not null,
  nzexspar    varchar2(57) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
  tablespace pas_data;
create  index nzpexta1 on nzpextaf
(
nzexbtid,
nzexhcod,
nzexglbt,
nzexadmn,
nzexinvn,
nzextrno
)
  tablespace pas_indx;
create  index nzpexta2 on nzpextaf
(
nzexadmn,
nzexinvn,
nzexglbt,
nzexhcod,
nzextrno
)
  tablespace pas_indx; 
create  index nzpexta3 on nzpextaf
(
nzexglbt,
nzexhcod,
nzexadmn,
nzexinvn,
nzextrno
)
  tablespace pas_indx; 
create  index nzpexta4 on nzpextaf
(
nzexhcod,
nzexglbt,
nzexadmn,
nzexinvn,
nzextrno
)
  tablespace pas_indx; 
