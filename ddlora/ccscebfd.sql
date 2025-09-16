create table ccscebaf
(
  cceblv1     varchar2(10) default ' ' not null,
  ccebnep     number(6,0) default 0 not null,
  ccebftc     number(16,4) default 0 not null,
  ccebfmn     number(14,2) default 0 not null,
  ccebfmx     number(14,2) default 0 not null,
  ccebfsv     number(16,4) default 0 not null,
  ccebttc     number(16,4) default 0 not null,
  ccebtmn     number(14,2) default 0 not null,
  ccebtmx     number(14,2) default 0 not null,
  ccebtsv     number(16,4) default 0 not null,
  cceblto     number(14,2) default 0 not null,
  cceblmn     number(14,2) default 0 not null,
  cceblmx     number(14,2) default 0 not null,
  cceblsv     number(16,4) default 0 not null,
  ccebspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsceba1 primary key( 
cceblv1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
