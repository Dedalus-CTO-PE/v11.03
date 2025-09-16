create table amsdepaf
(
  amdedep     varchar2(4) default ' ' not null,
  amdedes     varchar2(35) default ' ' not null,
  amdebas     number(2,0) default 0 not null,
  amdefrq     number(2,0) default 0 not null,
  amderat     number(6,2) default 0 not null,
  amdert01    number(6,2) default 0 not null,
  amdert02    number(6,2) default 0 not null,
  amdert03    number(6,2) default 0 not null,
  amdert04    number(6,2) default 0 not null,
  amdert05    number(6,2) default 0 not null,
  amdert06    number(6,2) default 0 not null,
  amdert07    number(6,2) default 0 not null,
  amdert08    number(6,2) default 0 not null,
  amdert09    number(6,2) default 0 not null,
  amdert10    number(6,2) default 0 not null,
  amdeur1     varchar2(30) default ' ' not null,
  amdeur2     varchar2(30) default ' ' not null,
  amdeud1     varchar2(8) default ' ' not null,
  amdeud2     varchar2(8) default ' ' not null,
  amdeuy1     varchar2(1) default ' ' not null,
  amdeuy2     varchar2(1) default ' ' not null,
  amdespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsdepa1 primary key( 
amdedep)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
