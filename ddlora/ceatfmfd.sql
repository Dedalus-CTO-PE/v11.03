create table ceatfmaf
(
  cetfcli     varchar2(6) default ' ' not null,
  cetfspc     varchar2(3) default ' ' not null,
  cetfpsc     varchar2(7) default ' ' not null,
  cetfstm     number(2,0) default 0 not null,
  cetfetm     number(2,0) default 0 not null,
  cetfspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceatfma1 primary key( 
cetfcli,
cetfspc,
cetfpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
