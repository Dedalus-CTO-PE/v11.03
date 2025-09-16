create table rcpdepaf
(
rcdprecp    varchar2(12),
drcdpcnt    varchar2(3),
rcdpadmn    varchar2(8),
rcdpscan    number(2,0),
rcdpdept    varchar2(3),
rcdppayt    number(1,0),
drcdpamn    number(14,2),
rcdpdraw    varchar2(20),
rcdpcbnk    varchar2(30),
rcdpcbrn    varchar2(30),
rcdpprac    varchar2(6),
rcdphosp    varchar2(2),
rcdpsyst    varchar2(2),
rcdpmhos    varchar2(3),
rcdpspar    varchar2(34),
lf          varchar2(1),
constraint rcpdepa1 primary key( 
rcdprecp,
drcdpcnt)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym rcpdepaf for rcpdepaf;
create unique index rcpdepa2 on rcpdepaf
(
rcdpdept,
rcdprecp,
drcdpcnt
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index rcpdepa3 on rcpdepaf
(
rcdpadmn,
rcdprecp,
drcdpcnt
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
