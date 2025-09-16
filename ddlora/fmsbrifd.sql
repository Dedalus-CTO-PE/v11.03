create table fmsbriaf
(
  fmbrrid     varchar2(3) default ' ' not null,
  fmbrdes     varchar2(35) default ' ' not null,
  fmbrbsc     varchar2(3) default ' ' not null,
  fmbrchq     varchar2(15) default ' ' not null,
  fmbrnor     varchar2(16) default ' ' not null,
  fmbrlog     varchar2(18) default ' ' not null,
  fmbrled     varchar2(2) default ' ' not null,
  fmbrdac     varchar2(12) default ' ' not null,
  fmbrcac     varchar2(12) default ' ' not null,
  fmbrdis     varchar2(5) default ' ' not null,
  fmbrres     varchar2(4) default ' ' not null,
  fmbrtds     varchar2(30) default ' ' not null,
  fmbrtrf     varchar2(15) default ' ' not null,
  fmbraut     varchar2(1) default ' ' not null,
  fmbrur1     varchar2(25) default ' ' not null,
  fmbrur2     varchar2(25) default ' ' not null,
  fmbrud1     varchar2(8) default ' ' not null,
  fmbrud2     varchar2(8) default ' ' not null,
  fmbruy1     varchar2(1) default ' ' not null,
  fmbruy2     varchar2(1) default ' ' not null,
  fmbrspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsbria1 primary key( 
fmbrrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsbria2 on fmsbriaf
(
fmbrchq,
fmbrbsc,
fmbrnor,
fmbrlog,
fmbrrid
)
  tablespace pas_indx; 
