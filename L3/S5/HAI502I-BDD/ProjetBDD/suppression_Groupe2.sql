/*  ==============================
    |  Suppression de la table |
    ==============================
*/  

prompt "Suppression des Triggers"

BEGIN
EXECUTE IMMEDIATE 'DROP TRIGGER nouveauVillage ';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -1360 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TRIGGER nouvelleReserve ';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -1360 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TRIGGER supprimerClanSansChef';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -1360 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TRIGGER calculTropheesNegatifs';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -1360 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TRIGGER calculAttaque';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -1360 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TRIGGER nouvelleTroupe';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -1360 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TRIGGER RejoindreChefClan';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -1360 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TRIGGER calculReservesNegatives';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -1360 THEN
  RAISE;
  END IF;
END;
/

prompt "Suppression des Fonctions"


begin
   execute immediate 'DROP PROCEDURE calculCapaciteMax';
exception when others then
   if sqlcode != -4043 then
      raise;
   end if;
end;
/

BEGIN
EXECUTE IMMEDIATE 'DROP FUNCTION calculQuantiteMax';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -4043 THEN
  RAISE;
  END IF;
END;
/


prompt "Suppression des table"

/*  ==============================
    |  Suppression des relations |
    ==============================
*/

BEGIN
EXECUTE IMMEDIATE 'DROP TABLE Camp';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -942 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TABLE Clan CASCADE CONSTRAINT';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -942 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TABLE Village CASCADE CONSTRAINT';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -942 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TABLE GuerreDeClan';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -942 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TABLE Reserves';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -942 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TABLE Heros';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -942 THEN
  RAISE;
  END IF;
END;
/

BEGIN
EXECUTE IMMEDIATE 'DROP TABLE Troupe';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -942 THEN
  RAISE;
  END IF;
END;
/


BEGIN
EXECUTE IMMEDIATE 'DROP TABLE Attaque';
EXCEPTION
 WHEN OTHERS THEN
  IF SQLCODE != -942 THEN
  RAISE;
  END IF;
END;
/

prompt "Suppression terminée"