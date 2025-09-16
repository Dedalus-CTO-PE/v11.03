create table tmpjrnaf
(
  tmjrbtch    varchar2(8) default ' ' not null,
  tmjrurno    varchar2(8) default ' ' not null,
  tmjrvist    varchar2(8) default ' ' not null,
  tmjrinvn    varchar2(8) default ' ' not null,
  tmjrjtyp    varchar2(3) default ' ' not null,
  tmjrjdat    varchar2(8) default ' ' not null,
  tmjrdesc    varchar2(30) default ' ' not null,
  tmjramnt    number(12,2) default 0 not null,
  tmjrgstc    varchar2(6) default ' ' not null,
  tmjrspar    varchar2(44) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint tmpjrna1 primary key( 
tmjrbtch,
tmjrurno,
tmjrvist,
tmjrinvn,
tmjrjtyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
