create table watlhiaf
(
wtlhurno    varchar2(8),
wtlhcode    varchar2(9),
dwtlhcon    varchar2(2),
wtlhdate    varchar2(8),
dwtlhlnu    varchar2(3),
wtlhrply    varchar2(3),
wtlhactn    varchar2(3),
wtlhrepr    varchar2(8),
wtlhuser    varchar2(10),
wtlhspar    varchar2(12),
lf          varchar2(1),
constraint watlhia1 primary key( 
wtlhurno,
wtlhcode,
dwtlhcon,
wtlhdate,
dwtlhlnu)
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
create public synonym watlhiaf for watlhiaf;
