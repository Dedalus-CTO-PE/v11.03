create table sinaudim
(
  siimaudd    varchar2(8) default ' ' not null,
  siimaudt    varchar2(8) default ' ' not null,
  siimaudp    varchar2(2) default ' ' not null,
  siimaudr    varchar2(1) default ' ' not null,
  siimauds    number(1,0) default 0 not null,
  siimaudo    varchar2(4) default ' ' not null,
  siimcst     varchar2(5) default ' ' not null,
  siimcat     varchar2(7) default ' ' not null,
  siimseq     varchar2(4) default ' ' not null,
  siimmax     number(14,2) default 0 not null,
  siimreq     number(14,2) default 0 not null,
  siimqoh     number(14,2) default 0 not null,
  siimur1     varchar2(15) default ' ' not null,
  siimur2     varchar2(15) default ' ' not null,
  siimud1     varchar2(8) default ' ' not null,
  siimud2     varchar2(8) default ' ' not null,
  siimuc1     varchar2(3) default ' ' not null,
  siimuc2     varchar2(3) default ' ' not null,
  siimuy1     varchar2(1) default ' ' not null,
  siimuy2     varchar2(1) default ' ' not null,
  siimwar     varchar2(5) default ' ' not null,
  siimspa     varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudim on sinaudim
(
siimaudd,
siimaudt,
siimaudp,
siimaudr
)
tablespace pas_indx; 
create table sinimpaf
(
  siimcst     varchar2(5) default ' ' not null,
  siimcat     varchar2(7) default ' ' not null,
  siimseq     varchar2(4) default ' ' not null,
  siimmax     number(14,2) default 0 not null,
  siimreq     number(14,2) default 0 not null,
  siimqoh     number(14,2) default 0 not null,
  siimur1     varchar2(15) default ' ' not null,
  siimur2     varchar2(15) default ' ' not null,
  siimud1     varchar2(8) default ' ' not null,
  siimud2     varchar2(8) default ' ' not null,
  siimuc1     varchar2(3) default ' ' not null,
  siimuc2     varchar2(3) default ' ' not null,
  siimuy1     varchar2(1) default ' ' not null,
  siimuy2     varchar2(1) default ' ' not null,
  siimwar     varchar2(5) default ' ' not null,
  siimspa     varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinimpa1 primary key( 
siimcst,
siimcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinimpa2 on sinimpaf
(
siimcat,
siimcst
)
  tablespace pas_indx; 
create unique index sinimpa3 on sinimpaf
(
siimcst,
siimseq,
siimcat
)
  tablespace pas_indx; 
