//------------------------------------------------------------------------------------------------
modded class SCR_CampaignBuildingPlacingObstructionEditorComponent : SCR_BaseEditorComponent
{
	//------------------------------------------------------------------------------------------------
	//! Disable obstruction checks
	protected override bool TraceEntityOnPosition(vector position, notnull BaseWorld world, float safeZoneRadius)
	{
		return false;
	}
}