create table nzpapiaf
(
  nzaprpis    varchar2(8) default ' ' not null,
  nzapstat    varchar2(1) default ' ' not null,
  nzaprinv    varchar2(20) default ' ' not null,
  nzaprdat    varchar2(8) default ' ' not null,
  nzapramt    number(14,2) default 0 not null,
  nzaprgst    number(14,2) default 0 not null,
  nzaprpin    varchar2(50) default ' ' not null,
  nzapadmn    varchar2(8) default ' ' not null,
  nzapurno    varchar2(8) default ' ' not null,
  nzapsnam    varchar2(20) default ' ' not null,
  nzapgnam    varchar2(25) default ' ' not null,
  nzapcntr    varchar2(6) default ' ' not null,
  nzapcnam    varchar2(40) default ' ' not null,
  nzaphsno    varchar2(2) default ' ' not null,
  nzaporgn    varchar2(5) default ' ' not null,
  nzaphnam    varchar2(50) default ' ' not null,
  nzapinvn    varchar2(8) default ' ' not null,
  nzapsrid    varchar2(11) default ' ' not null,
  nzapapdt    varchar2(8) default ' ' not null,
  nzapcost    varchar2(3) default ' ' not null,
  nzapacod    varchar2(5) default ' ' not null,
  nzapscod    varchar2(3) default ' ' not null,
  nzapgstc    varchar2(3) default ' ' not null,
  nzapgsta    varchar2(5) default ' ' not null,
  nzapgsts    varchar2(3) default ' ' not null,
  nzapspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpapia1 primary key( 
nzaprpis)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzpapia2 on nzpapiaf
(
nzapstat,
nzaprpis
)
  tablespace pas_indx; 
