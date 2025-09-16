create table emrdvpaf
(
  emdvstcd    varchar2(3) default ' ' not null,
  emdvddte    varchar2(8) default ' ' not null,
  emdvdtim    varchar2(8) default ' ' not null,
  emdvrdvn    varchar2(3) default ' ' not null,
  emdvffl1    varchar2(100) default ' ' not null,
  emdvffl2    varchar2(100) default ' ' not null,
  emdvffl3    varchar2(100) default ' ' not null,
  emdvffl4    varchar2(100) default ' ' not null,
  emdvffl5    varchar2(100) default ' ' not null,
  emdvuscr    varchar2(10) default ' ' not null,
  emdvdtrc    varchar2(8) default ' ' not null,
  emdvtmrc    varchar2(8) default ' ' not null,
  emdvusur    varchar2(10) default ' ' not null,
  emdvdtru    varchar2(8) default ' ' not null,
  emdvtmru    varchar2(8) default ' ' not null,
  emdvspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrdvpa1 primary key( 
emdvstcd,
emdvddte,
emdvdtim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
