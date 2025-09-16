create table sinoqcaf
(
siqccst     char(5),
siqcrid     char(8),
siqccat     char(7),
siqcunt     char(15),
siqcpd      char(30),
siqcpn      char(30),
siqcqty     decimal(14,2),
siqcsta     char(3),
siqcuid     char(4),
siqcdat     char(8),
siqctim     char(5),
siqcpor     char(2),
siqcpdt     char(8),
siqcptm     char(5),
siqcpid     char(4),
siqcppo     char(2),
siqcori     char(3),
siqcpty     decimal(1,0),
siqcpqt     decimal(14,2),
siqcect     decimal(16,4),
siqcgsta    decimal(16,4),
siqccan     char(30),
siqcord     char(7),
siqcreq     char(8),
siqcedt     char(8),
siqcsup     char(5),
siqcsut     char(15),
siqcpgp     char(5),
siqcgst     char(6),
siqccon     char(10),
siqccdt     char(8),
siqcspa     char(22),
lf          char(1)
);
create unique index sinoqca1 on sinoqcaf
(
siqccst,
siqcrid
);
create unique index sinoqca2 on sinoqcaf
(
siqcreq,
siqccst,
siqcrid
);
create unique index sinoqca3 on sinoqcaf
(
siqcord,
siqcsup,
siqcpn,
siqccst,
siqcrid
);
create unique index sinoqca4 on sinoqcaf
(
siqcord,
siqcsup,
siqccst,
siqcpn,
siqcrid
);
revoke all on sinoqcaf from public ; 
grant select on sinoqcaf to public ; 
